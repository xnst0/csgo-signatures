// SIGNATURES FOR CLIENT.DLL

CreateAnimationState() -> "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46";

UpdateAnimationState() -> "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3 0F 11 54 24";

SetAbsAngles() -> "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8";

SetAbsOrigin() -> "55 8B EC 83 E4 F8 51 53 56 57 8B F1";

InvalidatePhysicsRecursive() -> "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3 56 83 E0 04";

DoProceduralFootPlant() -> "55 8B EC 83 E4 F8 81 EC FC 00 00 00 53 56 8B F1 57";

ShouldSkipAnimationFrame() ->"57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02";

UpdateClientsideAnimation() -> "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36";

SetupBones() -> "55 8B EC 83 E4 F0 B8 D8";

ClipRayToHitbox() -> "55 8B EC 83 E4 F8 F3 0F 10 42";

UpdateTargets() -> "55 8B EC 83 E4 F0 81 EC ? ? ? ? 33 D2";

SolveDependencies() -> "55 8B EC 83 E4 F0 81 EC ? ? ? ? 8B 81";

AccumulatePose() -> "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ?";

AddDependencies() -> "55 8B EC 81 EC BC 00 00 00 53 56 57";

AttachmentHelper() -> "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4";

LineGoesThroughSmoke() -> "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F 57 C0";

FindHudElement() -> "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28";

ClearNotices() -> "55 8B EC 83 EC 0C 53 56 8B 71 58";

PhysicsRunThink() -> "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ? ? ? ? C1 E8 16";
