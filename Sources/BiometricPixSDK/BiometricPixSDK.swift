// BiometricPixSDK.swift
// This wrapper ensures Datadog is available as a transitive dependency

import Foundation
import BiometricPixSDKBinary
import Datadog

// Re-export all public APIs from the binary framework
@_exported import BiometricPixSDKBinary

// This wrapper target ensures that:
// 1. Your binary framework is available
// 2. Datadog is available as a transitive dependency
// 3. iOS projects get both dependencies automatically
