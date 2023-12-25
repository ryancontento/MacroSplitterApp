#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
178,
184,
185,
186,
187,
188,
189,
190,
192,
193,
256,
257,
259,
287,
288,
289,
309,
310,
311,
312,
389,
390,
391,
394,
427,
428,
430,
432,
434,
436,
441,
449,
450,
451,
452,
453,
454,
455,
456,
457,
589,
597,
600,
602,
607,
608,
610,
611,
615,
616,
618,
619,
622,
623,
624,
627,
629,
632,
634,
636,
703,
705,
707,
716,
717,
718,
720,
726,
727,
728,
729,
730,
738,
739,
740,
744,
745,
747,
749,
937,
1107,
1108,
5289,
5290,
5292,
5293,
5294,
5295,
5296,
5298,
5300,
5302,
5303,
5311,
5313,
5317,
5318,
5320,
5322,
5324,
5335,
5344,
5345,
5347,
5348,
5349,
5350,
5351,
5353,
5355,
6308,
6312,
6314,
6315,
6316,
6317,
6448,
6449,
6450,
6451,
6471,
6472,
6473,
6510,
6560,
6562,
6573,
6574,
6575,
6940,
6944,
6945,
6975,
6996,
7002,
7009,
7019,
7022,
7098,
7100,
7113,
7115,
7116,
7117,
7124,
7137,
7157,
7158,
7166,
7168,
7175,
7176,
7179,
7181,
7186,
7192,
7193,
7200,
7202,
7214,
7217,
7218,
7219,
7230,
7239,
7245,
7246,
7247,
7249,
7250,
7268,
7270,
7284,
7307,
7308,
7328,
7358,
7359,
7786,
7787,
7927,
8162,
8163,
8169,
8170,
8171,
8176,
8237,
8533,
8534,
9379,
9400,
9407,
9409,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 178,
ves_icall_System_Array_InternalCreate,
// token 184,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 185,
ves_icall_System_Array_CanChangePrimitive,
// token 186,
ves_icall_System_Array_FastCopy_raw,
// token 187,
ves_icall_System_Array_GetLength_raw,
// token 188,
ves_icall_System_Array_GetLowerBound_raw,
// token 189,
ves_icall_System_Array_GetGenericValue_icall,
// token 190,
ves_icall_System_Array_GetValueImpl_raw,
// token 192,
ves_icall_System_Array_SetValueImpl_raw,
// token 193,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 256,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 257,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 259,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 287,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 288,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 289,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 309,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 310,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 311,
ves_icall_System_Enum_InternalGetCorElementType,
// token 312,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 389,
ves_icall_System_Environment_get_ProcessorCount,
// token 390,
ves_icall_System_Environment_get_TickCount,
// token 391,
ves_icall_System_Environment_get_TickCount64,
// token 394,
ves_icall_System_Environment_FailFast_raw,
// token 427,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 428,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 430,
ves_icall_System_GC_SuppressFinalize_raw,
// token 432,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 434,
ves_icall_System_GC_GetGCMemoryInfo,
// token 436,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 441,
ves_icall_System_Object_MemberwiseClone_raw,
// token 449,
ves_icall_System_Math_Ceiling,
// token 450,
ves_icall_System_Math_Cos,
// token 451,
ves_icall_System_Math_Floor,
// token 452,
ves_icall_System_Math_Log10,
// token 453,
ves_icall_System_Math_Pow,
// token 454,
ves_icall_System_Math_Sin,
// token 455,
ves_icall_System_Math_Sqrt,
// token 456,
ves_icall_System_Math_Tan,
// token 457,
ves_icall_System_Math_ModF,
// token 589,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 597,
ves_icall_RuntimeType_make_array_type_raw,
// token 600,
ves_icall_RuntimeType_make_byref_type_raw,
// token 602,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 607,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 608,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 610,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 611,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 615,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 616,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 618,
ves_icall_System_RuntimeType_getFullName_raw,
// token 619,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 622,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 623,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 624,
ves_icall_RuntimeType_GetFields_native_raw,
// token 627,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 629,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 632,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 634,
ves_icall_RuntimeType_GetName_raw,
// token 636,
ves_icall_RuntimeType_GetNamespace_raw,
// token 703,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 705,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 707,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 716,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 717,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 718,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 720,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 726,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 727,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 728,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 729,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 738,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 739,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 740,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 744,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 745,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 747,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 749,
ves_icall_System_String_FastAllocateString_raw,
// token 937,
ves_icall_System_Type_internal_from_handle_raw,
// token 1107,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1108,
ves_icall_System_ValueType_Equals_raw,
// token 5289,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5290,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5292,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5293,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5294,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5295,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5296,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5298,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5300,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5302,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5303,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5311,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5313,
mono_monitor_exit_icall_raw,
// token 5317,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5318,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5320,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5322,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5324,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5335,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5344,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5345,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5347,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5348,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5349,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5350,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5351,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5353,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5355,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6308,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6312,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6314,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6315,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6316,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6317,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6448,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6449,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6450,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6451,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6471,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6472,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6473,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6510,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6560,
mono_object_hash_icall_raw,
// token 6562,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6573,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6574,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6575,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6940,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6944,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6945,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6975,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6996,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7002,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7009,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7019,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7022,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7098,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 7100,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7113,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7115,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 7116,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7117,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7124,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7137,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7157,
ves_icall_reflection_get_token_raw,
// token 7158,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7166,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7168,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7175,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7176,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7179,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7181,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7186,
ves_icall_reflection_get_token_raw,
// token 7192,
ves_icall_get_method_info_raw,
// token 7193,
ves_icall_get_method_attributes,
// token 7200,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7202,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7214,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7217,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7218,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7219,
ves_icall_reflection_get_token_raw,
// token 7230,
ves_icall_InternalInvoke_raw,
// token 7239,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7245,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7246,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7247,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7249,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7250,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7268,
ves_icall_InvokeClassConstructor_raw,
// token 7270,
ves_icall_InternalInvoke_raw,
// token 7284,
ves_icall_reflection_get_token_raw,
// token 7307,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7308,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7328,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7358,
ves_icall_reflection_get_token_raw,
// token 7359,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7786,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7787,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7927,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8162,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8163,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8169,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8170,
ves_icall_ModuleBuilder_getToken_raw,
// token 8171,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8176,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8237,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8533,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8534,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9379,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9400,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9407,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9409,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
