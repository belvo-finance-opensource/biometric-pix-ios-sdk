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
            targets: ["BiometricPixSDK"]),
    ],
    dependencies: [
        .package(url: "https://github.com/DataDog/dd-sdk-ios.git", from: "2.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "BiometricPixSDKBinary",
            path: "BiometricPixSDK.xcframework"
        ),
        .target(
            name: "BiometricPixSDK",
            dependencies: [
                "BiometricPixSDKBinary",
                .product(name: "Datadog", package: "dd-sdk-ios")
            ]
        ),
    ]
)
