// swift-tools-version:5.7

import PackageDescription

let package = Package(
    name: "BiometricPixSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "BiometricPixSDK",
            targets: ["BiometricPixSDKWrapper"]),
    ],
    dependencies: [
        .package(url: "https://github.com/DataDog/dd-sdk-ios.git", from: "2.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "BiometricPixSDK",
            path: "BiometricPixSDK.xcframework"
        ),
        .target(
            name: "BiometricPixSDKWrapper",
            dependencies: [
                "BiometricPixSDK",
                .product(name: "DatadogObjc", package: "dd-sdk-ios"),
                .product(name: "DatadogRUM", package: "dd-sdk-ios"),
                .product(name: "DatadogCore", package: "dd-sdk-ios"),
                .product(name: "DatadogLogs", package: "dd-sdk-ios"),
                .product(name: "DatadogCrashReporting", package: "dd-sdk-ios")
            ]
        ),
    ]
)
