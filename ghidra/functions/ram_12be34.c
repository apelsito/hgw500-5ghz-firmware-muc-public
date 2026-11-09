/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012be34 */

void FUN_ram_0012be34(int param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar11 = param_2[5];
  iVar12 = *(int *)(param_1 + 0x3b20);
  iVar3 = FUN_ram_001030e8(iVar12,2,0);
  cVar6 = *(char *)(param_1 + 0x1d);
  if (cVar6 == '\x0e') {
    if ((*(ushort *)(iVar11 + 0xc) & 0x4000) != 0) goto LAB_ram_0012beb8;
LAB_ram_0012bee4:
    if (*(short *)(param_1 + 0x4058) != 0) {
      return;
    }
    iVar9 = 0;
  }
  else {
    if (cVar6 == '\r') {
      uVar2 = *(ushort *)(iVar11 + 0xc);
    }
    else if (cVar6 == '\f') {
      uVar2 = *(ushort *)(iVar11 + 0xc);
    }
    else {
      if (cVar6 != '\v') goto LAB_ram_0012bee4;
      uVar2 = *(ushort *)(iVar11 + 0xc);
    }
    if ((uVar2 & 0x4000) == 0) goto LAB_ram_0012bee4;
LAB_ram_0012beb8:
    if (*(short *)(param_1 + 0x4058) != 0) {
      return;
    }
    iVar9 = 1;
  }
  if (iVar3 != 0) {
    DAT_ram_80037834 = DAT_ram_80037834 + 1;
    return;
  }
  bVar7 = *(char *)(iVar11 + 0x687) + 1;
  *(byte *)(iVar11 + 0x687) = bVar7;
  if (iVar9 == 0) {
    cVar6 = *(char *)(iVar11 + 0x683);
    if (bVar7 == 5) {
      cVar1 = *(char *)(iVar11 + 0x685);
      iVar3 = *param_2;
      *(char *)(iVar11 + 0x684) = cVar1;
    }
    else if (bVar7 < 10) {
      iVar3 = *param_2;
      *(char *)(iVar11 + 0x684) = cVar6;
      cVar1 = cVar6;
    }
    else {
      iVar3 = *param_2;
      *(undefined1 *)(iVar11 + 0x687) = 0;
      *(char *)(iVar11 + 0x684) = *(char *)(iVar11 + 0x686);
      cVar1 = *(char *)(iVar11 + 0x686);
    }
    if (cVar1 == '\x01') {
      iVar13 = *(int *)(iVar12 + 0x130);
    }
    else {
      iVar13 = *(int *)(iVar12 + 300);
    }
    goto LAB_ram_0012c098;
  }
  if (bVar7 == 5) {
    cVar6 = *(char *)(iVar11 + 0x685);
    *(char *)(iVar11 + 0x684) = cVar6;
joined_r0x0012bf68:
    if (cVar6 == '\x02') goto LAB_ram_0012bf7c;
LAB_ram_0012bf70:
    if (cVar6 == '\x01') {
      iVar13 = *(int *)(iVar12 + 0x138);
    }
    else {
      iVar13 = *(int *)(iVar12 + 0x134);
    }
  }
  else {
    if (bVar7 < 10) {
      cVar6 = *(char *)(iVar11 + 0x683);
      *(char *)(iVar11 + 0x684) = cVar6;
      goto joined_r0x0012bf68;
    }
    cVar6 = *(char *)(iVar11 + 0x686);
    *(undefined1 *)(iVar11 + 0x687) = 0;
    *(char *)(iVar11 + 0x684) = cVar6;
    if (cVar6 != '\x02') goto LAB_ram_0012bf70;
LAB_ram_0012bf7c:
    iVar13 = *(int *)(iVar12 + 0x13c);
  }
  FUN_ram_000e3b08(iVar13,*(undefined4 *)(param_1 + 0x3b20),0,cVar6,0,
                   *(undefined4 *)(iVar11 + 0xd34),*(undefined1 *)(iVar11 + 0xd31),
                   *(undefined1 *)(iVar11 + 0xd30),0,1);
  iVar3 = *param_2;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    uVar8 = (*(ushort *)(iVar11 + 0x422) & 0x1ff) << 0x10;
    *(uint *)(iVar3 + 0x48) = *(uint *)(iVar3 + 0x48) & 0xfe00fc0f | uVar8;
    cVar6 = *(char *)(iVar11 + 0x683);
    *(uint *)(iVar13 + 0x48) = *(uint *)(iVar13 + 0x48) & 0xfe00fc0f | uVar8;
  }
  else {
    uVar8 = (*(ushort *)(iVar11 + 0x422) & 0x1ff) << 0x10 | 0x3f0;
    *(uint *)(iVar3 + 0x48) = *(uint *)(iVar3 + 0x48) & 0xfe00fc0f | uVar8;
    cVar6 = *(char *)(iVar11 + 0x683);
    *(uint *)(iVar13 + 0x48) = *(uint *)(iVar13 + 0x48) & 0xfe00fc0f | uVar8;
  }
LAB_ram_0012c098:
  iVar4 = FUN_ram_0011bc70(0,0,cVar6);
  bVar7 = *(byte *)(iVar11 + 0x688);
  iVar5 = FUN_ram_0011bda4();
  if (iVar5 < (int)((uint)bVar7 + iVar4)) {
    uVar8 = FUN_ram_0011bda4();
  }
  else {
    uVar8 = (uint)*(byte *)(iVar11 + 0x688) + iVar4 & 0xff;
  }
  bVar7 = *(byte *)(iVar11 + 0x684);
  *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffff8ff | (uVar8 & 7) << 8;
  cVar6 = *(char *)(iVar11 + 100);
  *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) & 0xfffff9ff | (bVar7 & 3) << 9;
  uVar10 = 0;
  if (cVar6 == '\0') {
    uVar10 = DAT_ram_8002c937;
  }
  FUN_ram_000e4c48(iVar3,iVar12,uVar10,*(undefined1 *)(iVar11 + 0x683),0,iVar9,0);
  iVar3 = FUN_ram_0011bc70(0,0,*(undefined1 *)(iVar11 + 0x684));
  bVar7 = *(byte *)(iVar11 + 0x688);
  iVar12 = FUN_ram_0011bda4();
  if (iVar12 < (int)((uint)bVar7 + iVar3)) {
    uVar8 = FUN_ram_0011bda4();
  }
  else {
    uVar8 = (uint)*(byte *)(iVar11 + 0x688) + iVar3 & 0xff;
  }
  iVar3 = param_2[2];
  *(uint *)(iVar13 + 0x30) = *(uint *)(iVar13 + 0x30) & 0xfffff8ff | (uVar8 & 7) << 8;
  FUN_ram_00129fc8(param_1,iVar3);
  iVar3 = *(int *)(param_1 + 0x3b20);
  *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc0) = 1;
  *(int *)(*(int *)(iVar3 + 0xc) + 0xc0) = *param_2;
  *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc0) = 1;
  *(int *)(*(int *)(iVar3 + 0xc) + 0xc0) = iVar13;
  DAT_ram_80037830 = DAT_ram_80037830 + 1;
  return;
}


