// BiometricPixSDKWrapper.swift
// This wrapper ensures Datadog is available as a transitive dependency

import BiometricPixSDK
import DatadogObjc
import DatadogCrashReporting

// Re-export all public APIs from the binary framework
@_exported import BiometricPixSDK

// This wrapper target ensures that:
// 1. Your binary framework is available
// 2. Datadog is available as a transitive dependency
// 3. iOS projects get both dependencies automatically

// The actual fix: explicitly expose the class that can be instantiated
// This resolves the "Cannot call value of non-function type 'module<BiometricPixSDK>'" error
public typealias BiometricPixSDK = BiometricPixSDK.BiometricPixSDK
