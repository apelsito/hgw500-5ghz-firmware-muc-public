/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001573e0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_001573e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *param_1;
  uVar5 = 0;
  iVar1 = FUN_ram_00155e14((char)param_1[0x19f]);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_ram_001573a4(param_1);
  if (((iVar2 == 0) || (*(char *)(iVar6 + 0x7f) == '\0')) ||
     ((*(ushort *)(param_1 + 0x104) & 0x400) != 0 || (*(ushort *)(param_1 + 0x104) & 0x800) != 0))
  goto LAB_ram_00157570;
  if ((*(ushort *)(param_1 + 3) & 0x4000) == 0) {
    if ((((*(ushort *)(param_1 + 3) & 8) != 0) && (*(char *)(*param_1 + 0x80) != '\0')) &&
       ((char)param_1[0x19] == '\0')) {
      if (((*(ushort *)((int)param_1 + 0x6e) & 0x800) == 0) || (*(char *)(*param_1 + 0x81) == '\0'))
      {
        uVar5 = 0xeff;
      }
      else {
        uVar5 = 0x1eff;
      }
    }
    goto LAB_ram_00157570;
  }
  uVar4 = (uint)*(byte *)(*param_1 + 0x81);
  if (DAT_ram_8002c904 == 0xe) {
    if ((char)param_1[0x19] == '\0') {
      uVar3 = *(uint *)((int)param_1 + 0x3c6);
      if (uVar4 <= uVar3) goto LAB_ram_001574a0;
LAB_ram_001574ac:
      uVar3 = uVar3 & 0xff;
      if (uVar4 != 3) goto LAB_ram_001574bc;
    }
LAB_ram_001574b4:
    uVar5 = 0;
    goto LAB_ram_00157570;
  }
  uVar3 = *(uint *)((int)param_1 + 0x3c6);
  if (uVar3 < uVar4) goto LAB_ram_001574ac;
LAB_ram_001574a0:
  uVar3 = uVar4;
  if (uVar4 == 3) goto LAB_ram_001574b4;
LAB_ram_001574bc:
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if ((*(char *)((int)param_1 + 0x65) == '\x02') && ((DAT_ram_8002c8b8 & 0x200) != 0)) {
    uVar4 = 0;
  }
  if (((((param_1[0xe3] & 0x80U) == 0) || ((*(ushort *)(param_1 + 0xf7) & 0x20) == 0)) ||
      ((*(ushort *)(param_1 + 0xf7) & 0x10) == 0)) && (uVar4 != 0)) {
    if (uVar4 == 1) {
      uVar5 = 0x1ef7;
    }
    else {
      if (uVar4 != 2) goto LAB_ram_00157514;
      uVar5 = 0x2c7e;
    }
  }
  else {
LAB_ram_00157514:
    uVar5 = 0xef7;
  }
  FUN_ram_000ee260(s_PEER_AMSDU__d_ram_001c74b8,uVar5);
LAB_ram_00157570:
  FUN_ram_00156738(iVar1 + 0x7a,2,uVar5,2);
  return;
}


