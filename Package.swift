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
    targets: [
        .binaryTarget(
            name: "BiometricPixSDK",
            path: "BiometricPixSDK.xcframework"
        ),
    ]
)
