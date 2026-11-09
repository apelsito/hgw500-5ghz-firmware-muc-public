/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00106f00 */

void FUN_ram_00106f00(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = param_1[10];
  uVar5 = uVar4 & 0xffefffff;
  param_1[10] = uVar5;
  if ((*(short *)(param_1 + 0x10e) == 3) != (param_2 == 3)) {
    *(undefined2 *)(param_1 + 0xe78) = 0;
    *(undefined2 *)((int)param_1 + 0x39e2) = 0;
  }
  iVar2 = param_1[0xe1f];
  uVar1 = *(uint *)(iVar2 + 4);
  if ((((uVar1 & 0x140) == 0x140) || ((uVar1 & 0x10140) == 0x10140)) ||
     ((uVar1 & 0x100c0) == 0x100c0)) {
LAB_ram_00106f6c:
    bVar6 = true;
LAB_ram_00106fc8:
    pcVar3 = (code *)param_1[0xe7f];
    if (bVar6) goto LAB_ram_00106fd0;
    uVar5 = uVar4 & 0xffeffbff;
    param_1[10] = uVar5;
    if (pcVar3 != (code *)0x0) goto LAB_ram_0010703c;
    uVar4 = *(uint *)(iVar2 + 4);
    bVar6 = (uVar4 & 0x140) != 0x140;
    if (bVar6) {
      uVar4 = uVar4 & 0x10140;
    }
    if ((!bVar6 || uVar4 == 0x10140) || ((param_1[0xc] & 0x800) != 0)) goto LAB_ram_001070a0;
LAB_ram_001070b0:
    param_1[10] = uVar5 & 0xfffbffff | 0x200000;
  }
  else {
    if ((uVar1 & 0xc0) != 0xc0) {
      if ((((uVar1 & 0x480) == 0x480) && (*(char *)((int)param_1 + 0x1e) == '\x06')) &&
         ((param_1[0xc] & 0x400) != 0)) goto LAB_ram_00106f6c;
LAB_ram_00106fc4:
      bVar6 = false;
      goto LAB_ram_00106fc8;
    }
    if ((*(char *)((int)param_1 + 0x1e) != '\x06') || ((param_1[0xc] & 0x400) == 0))
    goto LAB_ram_00106fc4;
    pcVar3 = (code *)param_1[0xe7f];
LAB_ram_00106fd0:
    uVar5 = uVar5 | 0x400;
    param_1[10] = uVar5;
    if (pcVar3 == (code *)0x0) {
      uVar4 = *(uint *)(iVar2 + 4);
      bVar6 = (uVar4 & 0x140) != 0x140;
      if (bVar6) {
        uVar4 = uVar4 & 0x10140;
      }
      if (bVar6 && uVar4 != 0x10140) {
        uVar4 = param_1[0xc];
joined_r0x00107070:
        if ((uVar4 & 0x800) == 0) goto LAB_ram_001070b0;
      }
    }
    else {
LAB_ram_0010703c:
      (*pcVar3)(*param_1);
      uVar5 = param_1[10];
      uVar4 = *(uint *)(param_1[0xe1f] + 4);
      bVar6 = (uVar4 & 0x140) != 0x140;
      if (bVar6) {
        uVar4 = uVar4 & 0x10140;
      }
      if (bVar6 && uVar4 != 0x10140) {
        uVar4 = param_1[0xc];
        goto joined_r0x00107070;
      }
    }
LAB_ram_001070a0:
    param_1[10] = uVar5 & 0xffdfffff | 0x40000;
  }
  return;
}


