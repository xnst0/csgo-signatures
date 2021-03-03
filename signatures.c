// SIGNATURES FOR CLIENT.DLL
void __thiscall CreateAnimationState(AnimState* statePtr, Player* player) = "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46";
void __vectorcall* UpdateAnimationState(AnimState* statePtr, void*(nullptr), roll, yaw, pitch, void*(nullptr)) = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3 0F 11 54 24";
void __thiscall SetAbsAngles(Player* player, const Angle& angles) = "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8";
void __thiscall InvalidatePhysicsRecursive(Player* player, int changeFlags) = "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3 56 83 E0 04";
void __thiscall DoProceduralFootPlant(void* thisptr, void* a, void* b, void* c, void* d, void* f, void* g) = "55 8B EC 83 E4 F8 81 EC FC 00 00 00 53 56 8B F1 57";
bool __fastcall ShouldSkipAnimationFrame(..) = "57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02";
bool __thiscall UpdateClientsideAnimation(Player* player) = "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36";
bool __thiscall SetupBones(void* thisptr, , Matrix3x4* bonesOut, int maxBones, int mask, float curtime) = "55 8B EC 83 E4 F0 B8 D8";
int __fastcall ClipRayToHitbox(const Ray&, StudioBBox*, Matrix3x4&, Trace&) =  "55 8B EC 83 E4 F8 F3 0F 10 42";
void __thiscall UpdateTargets(IKContext* thisptr, Vector*, Quaternion*, Matrix3x4*, uint8_t*) = "55 8B EC 83 E4 F0 81 EC ?? ?? ?? ?? 33 D2";
void __thiscall SolveDependencies(IKContext* thisptr, Vector*, Quaternion*, Matrix3x4**, uint8_t*) = "55 8B EC 83 E4 F0 81 EC ?? ?? ?? ?? 8B 81";
void __thiscall AccumulatePose(CBoneSetup* thisptr, Vector* pos, Quaternion* q, int sequence, float cycle, float weight, float time, IKContext* pIKContext) = "55 8B EC 83 E4 F0 B8 ?? ?? ?? ?? E8 ?? ?? ?? ?? A1 ?? ?? ?? ??";
void__thiscall AddDependencies(CIKContext* this, float, int, int, float, float) = "55 8B EC 81 EC BC 00 00 00 53 56 57";
void __thiscall AttachmentHelper(Player* thisptr, CStudioHdr*) = "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4";
