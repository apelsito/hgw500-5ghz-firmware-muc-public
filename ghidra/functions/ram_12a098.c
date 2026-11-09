/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012a098 */

undefined4 FUN_ram_0012a098(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  
  if (DAT_ram_8002c8bc == '\x03') {
    iVar3 = param_1 + 0x3fe0 + param_2 * 4;
    if ((*(int *)(iVar3 + -0x5c) == -1) && (*(uint *)(param_1 + 0x3f7c) < 4)) {
      iVar1 = FUN_ram_00102138(*(undefined4 *)(param_1 + 0x3b20),param_2,param_3,&local_48,local_44,
                               &local_3c,auStack_40);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x3f7c);
        if (DAT_ram_0018c024 == 0) {
          *(int *)(iVar3 + -0x5c) = iVar1;
        }
        else {
          *(undefined4 *)(iVar3 + -0x5c) = local_48;
        }
        iVar1 = iVar1 * 0x38;
        iVar3 = param_1 + 0x3d84 + iVar1;
        FUN_ram_000e7d40(iVar3 + 0x3c,1);
        iVar4 = param_1 + iVar1;
        *(undefined4 *)(iVar4 + 0x3dc8) = 0;
        *(int *)(iVar4 + 0x3dcc) = iVar4 + 0x3dc8;
        *(undefined4 *)(iVar4 + 0x3dd0) = 0;
        *(int *)(iVar4 + 0x3dd4) = iVar4 + 0x3dd0;
        *(undefined1 *)(iVar3 + 0x38) = (undefined1)local_48;
        *(undefined1 *)(iVar3 + 0x54) = local_44[0];
        *(undefined1 *)(iVar3 + 0x55) = 0;
        *(undefined1 *)(param_1 + 0x3dda + iVar1) = 0;
        *(undefined1 *)(param_1 + 0x3ddb + iVar1) = 0;
        iVar5 = param_1 + 0x3fe0 + iVar1;
        *(undefined4 *)(iVar5 + -0x204) = 0;
        *(char *)(iVar3 + 0x5c) = (char)param_2;
        uVar2 = *(undefined4 *)(param_1 + 0x3b20);
        *(undefined4 *)(iVar5 + -0x1fc) = local_3c;
        *(undefined1 *)(iVar3 + 100) = auStack_40[0];
        *(undefined4 *)(iVar5 + -500) = local_3c;
        iVar3 = FUN_ram_00103e90(uVar2,param_2,param_3,&local_48,local_44,&local_3c,auStack_40);
        if (iVar3 == 0) {
          iVar3 = param_1 + 0x3f80 + iVar1;
          FUN_ram_000e7d40(iVar3 + -0xe0,1);
          *(undefined4 *)(iVar4 + 0x3ea8) = 0;
          *(int *)(iVar4 + 0x3eac) = iVar4 + 0x3ea8;
          *(undefined4 *)(iVar4 + 0x3eb0) = 0;
          *(int *)(iVar4 + 0x3eb4) = iVar4 + 0x3eb0;
          *(undefined1 *)(iVar3 + -0xe4) = (undefined1)local_48;
          *(undefined1 *)(iVar3 + -200) = local_44[0];
          *(undefined1 *)(iVar3 + -199) = 0;
          *(undefined1 *)(param_1 + 0x3eba + iVar1) = 0;
          *(undefined1 *)(param_1 + 0x3ebb + iVar1) = 0;
          *(undefined4 *)(iVar5 + -0x124) = 0;
          *(char *)(iVar3 + -0xc0) = (char)param_2;
          *(undefined4 *)(iVar5 + -0x11c) = local_3c;
          *(undefined1 *)(iVar3 + -0xb8) = auStack_40[0];
          iVar3 = *(int *)(param_1 + 0x3f7c);
          *(undefined4 *)(iVar5 + -0x114) = local_3c;
          *(int *)(param_1 + 0x3f7c) = iVar3 + 1;
          return 0;
        }
      }
    }
  }
  else {
    iVar3 = FUN_ram_00102138(*(undefined4 *)(param_1 + 0x3b20),param_2,param_3,&local_48,local_44,
                             &local_3c,auStack_40);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 0x10;
}


