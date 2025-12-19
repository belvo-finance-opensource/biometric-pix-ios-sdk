// swift-tools-version:5.7

import PackageDescription

let package = Package(
    name: "BiometricPixSDK",
    platforms: [
        .iOS(.v15),
    ],
    products: [
        .library(
            name: "BiometricPixSDK",
            targets: ["BiometricPixSDKWrapper"]),
        .library(
            name: "BiometricPixComponents",
            targets: ["BiometricPixComponentsWrapper"]),
    ],
    dependencies: [
        .package(url: "https://github.com/DataDog/dd-sdk-ios.git", from: "2.30.0")
    ],
    targets: [
        .binaryTarget(
            name: "BiometricPixModelsBinary",
            path: "Binaries/BiometricPixModels.xcframework"
        ),
        .binaryTarget(
            name: "BiometricPixSDKBinary",
            path: "Binaries/BiometricPixSDK.xcframework"
        ),
        .binaryTarget(
            name: "BiometricPixComponentsBinary",
            path: "Binaries/BiometricPixComponents.xcframework"
        ),
        .target(
            name: "BiometricPixSDKWrapper",
            dependencies: [
                "BiometricPixSDKBinary",
                .product(name: "DatadogObjc", package: "dd-sdk-ios"),
                .product(name: "DatadogCrashReporting", package: "dd-sdk-ios")
            ]
        ),
        .target(
            name: "BiometricPixComponentsWrapper",
            dependencies: [
                "BiometricPixComponentsBinary",
                "BiometricPixModelsBinary"
            ]
        ),
    ]
)
