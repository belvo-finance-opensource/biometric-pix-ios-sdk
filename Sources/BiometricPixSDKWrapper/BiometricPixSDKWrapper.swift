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

// The @_exported import should be sufficient to expose the BiometricPixSDK class
// If the error persists, the issue might be in how the binary framework is structured
