/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014019c */

undefined4 FUN_ram_0014019c(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  
  uVar4 = *(ushort *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  puVar3 = (uint *)FUN_ram_000ee4c8(0x24f4,0,2);
  *(uint **)(param_1 + 0x4c8) = puVar3;
  *(undefined1 *)(param_1 + 0x4b8) = 10;
  if (puVar3 == (uint *)0x0) {
    return 0xfffffff4;
  }
  *(undefined ***)(param_1 + 0x4c0) = &PTR_LAB_ram_00141050_ram_0018d42c;
  FUN_ram_000eea80(puVar3,0,0x24f4);
  uVar6 = DAT_ram_80038ee0 + DAT_ram_0018d464;
  puVar3[2] = DAT_ram_80038ee4 + (uint)CARRY4(DAT_ram_80038ee0,DAT_ram_0018d464);
  puVar3[1] = uVar6;
  if ((uVar4 >> 0xe & 1) == 0) {
    *(undefined1 *)(puVar3 + 4) = 0xe;
    *(undefined1 *)((int)puVar3 + 0x11) = 0xc;
    *(undefined1 *)((int)puVar3 + 0x12) = 10;
    *(undefined1 *)((int)puVar3 + 0x13) = 8;
    *(undefined1 *)(puVar3 + 5) = 0xc;
  }
  else {
    *(undefined1 *)(puVar3 + 4) = 0x10;
    *(undefined1 *)((int)puVar3 + 0x11) = 0xe;
    *(undefined1 *)((int)puVar3 + 0x12) = 0xc;
    *(undefined1 *)((int)puVar3 + 0x13) = 10;
    *(undefined1 *)(puVar3 + 5) = 0xe;
  }
  uVar6 = (uint)DAT_ram_0018d479;
  *(undefined2 *)(puVar3 + 6) = 0xffff;
  *puVar3 = *puVar3 | 1;
  iVar9 = 0;
  iVar7 = 0x43;
  puVar3[3] = uVar6;
  puVar8 = puVar3 + 0x8e1;
  do {
    iVar2 = iVar9 * 0x16;
    *(undefined2 *)((int)puVar3 + iVar2 + 0x49c) = 0;
    *(undefined2 *)((int)puVar3 + iVar2 + 0x4ae) = 0xf830;
    iVar5 = 0;
    do {
      iVar1 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *(undefined2 *)((int)puVar3 + iVar1 + iVar2 + 0x49e) = 0;
    } while (iVar5 < 8);
    puVar3[iVar9 * 8 + 0x299] = 0;
    puVar3[iVar9 * 8 + 0x4b1] = 0;
    puVar3[iVar9 * 8 + 0x6c9] = 0;
    puVar3[iVar9 * 8 + 0x29a] = 0;
    puVar3[iVar9 * 8 + 0x4b2] = 0;
    puVar3[iVar9 * 8 + 0x6ca] = 0;
    puVar3[iVar9 * 8 + 0x29b] = 0;
    puVar3[iVar9 * 8 + 0x4b3] = 0;
    puVar3[iVar9 * 8 + 0x6cb] = 0;
    puVar3[iVar9 * 8 + 0x29c] = 0;
    puVar3[iVar9 * 8 + 0x4b4] = 0;
    puVar3[iVar9 * 8 + 0x6cc] = 0;
    puVar3[iVar9 * 8 + 0x29d] = 0;
    puVar3[iVar9 * 8 + 0x4b5] = 0;
    puVar3[iVar9 * 8 + 0x6cd] = 0;
    puVar3[iVar9 * 8 + 0x29e] = 0;
    puVar3[iVar9 * 8 + 0x4b6] = 0;
    puVar3[iVar9 * 8 + 0x6ce] = 0;
    puVar3[iVar9 * 8 + 0x29f] = 0;
    puVar3[iVar9 * 8 + 0x4b7] = 0;
    puVar3[iVar9 * 8 + 0x6cf] = 0;
    puVar3[iVar9 * 8 + 0x2a0] = 0;
    puVar3[iVar9 * 8 + 0x4b8] = 0;
    puVar3[iVar9 * 8 + 0x6d0] = 0;
    *puVar8 = 0;
    iVar7 = iVar7 + -1;
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar7 != 0);
  puVar3[0x927] = (uint)&DAT_ram_001a8d18;
  puVar3[0x928] = (uint)&DAT_ram_001a8df0;
  puVar3[0x929] = (uint)&DAT_ram_001a8df0;
  puVar3[0x92a] = (uint)&DAT_ram_001a8e40;
  puVar3[0x92b] = (uint)&DAT_ram_001a8e90;
  puVar3[0x92c] = (uint)&DAT_ram_001a8d5c;
  puVar3[0x92d] = (uint)&DAT_ram_001a8da0;
  *(undefined1 *)(puVar3 + 0x932) = 0;
  *(undefined1 *)((int)puVar3 + 0x24c9) = 0;
  *(undefined1 *)(puVar3 + 0x939) = 0;
  *(undefined1 *)((int)puVar3 + 0x24e5) = 0;
  *(undefined1 *)((int)puVar3 + 0x24ca) = 1;
  if ((DAT_ram_8002c230 & 0x20) == 0) {
    uVar4 = DAT_ram_0018d470 | 0x40;
    DAT_ram_0018d470 = DAT_ram_0018d470 & 0xffdf | 0x40;
    if ((DAT_ram_8002c230 & 0x10) != 0) goto LAB_ram_001404d4;
  }
  else {
    uVar4 = DAT_ram_0018d470 & 0xffbf;
    if ((DAT_ram_8002c230 & 0x10) != 0) {
      DAT_ram_0018d470 = DAT_ram_0018d470 & 0xff9f;
      goto LAB_ram_001404d4;
    }
  }
  DAT_ram_0018d470 = uVar4 | 0x20;
LAB_ram_001404d4:
  puVar3[0x298] = (uint)DAT_ram_0018d47b;
  return 0;
}


