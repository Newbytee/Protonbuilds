#ifdef __cplusplus
extern "C" {
#endif
extern EVROverlayError cppIVROverlay_IVROverlay_024_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_DestroyOverlay(void *, VROverlayHandle_t);
extern uint32_t cppIVROverlay_IVROverlay_024_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_024_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayName(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum(void *, EVROverlayError);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayRenderingPid(void *, VROverlayHandle_t, uint32_t);
extern uint32_t cppIVROverlay_IVROverlay_024_GetOverlayRenderingPid(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayFlags(void *, VROverlayHandle_t, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTexelAspect(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTexelAspect(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlaySortOrder(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlaySortOrder(void *, VROverlayHandle_t, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayCurvature(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayCurvature(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, char *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative(void *, VROverlayHandle_t, VROverlayHandle_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative(void *, VROverlayHandle_t, VROverlayHandle_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTransformCursor(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTransformCursor(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_ShowOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_024_IsOverlayVisible(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdVector2_t, HmdMatrix34_t *);
extern bool cppIVROverlay_IVROverlay_024_PollNextOverlayEvent(void *, VROverlayHandle_t, winVREvent_t_11030 *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_024_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_024_IsHoverTargetOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayIntersectionMask(void *, VROverlayHandle_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayCursor(void *, VROverlayHandle_t, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayTexture(void *, VROverlayHandle_t, Texture_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_ClearOverlayTexture(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTexture(void *, VROverlayHandle_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, ETextureType *, EColorSpace *, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle(void *, VROverlayHandle_t, void *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetOverlayTextureSize(void *, VROverlayHandle_t, uint32_t *, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_024_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_024_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_024_ShowDashboard(void *, const char *);
extern TrackedDeviceIndex_t cppIVROverlay_IVROverlay_024_GetPrimaryDashboardDevice(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_024_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, uint32_t, const char *, uint32_t, const char *, uint64_t);
extern EVROverlayError cppIVROverlay_IVROverlay_024_ShowKeyboardForOverlay(void *, VROverlayHandle_t, EGamepadTextInputMode, EGamepadTextInputLineMode, uint32_t, const char *, uint32_t, const char *, uint64_t);
extern uint32_t cppIVROverlay_IVROverlay_024_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_024_HideKeyboard(void *);
extern void cppIVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute(void *, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern void cppIVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay(void *, VROverlayHandle_t, HmdRect2_t);
extern VRMessageOverlayResponse cppIVROverlay_IVROverlay_024_ShowMessageOverlay(void *, const char *, const char *, const char *, const char *, const char *, const char *);
extern void cppIVROverlay_IVROverlay_024_CloseMessageOverlay(void *);
#ifdef __cplusplus
}
#endif
