/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001642d0 */

void FUN_ram_001642d0(int param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = DAT_ram_0020fe23;
  if (*(short *)(param_1 + 0x4058) != 0) {
    return;
  }
  DAT_ram_0020fe2c = DAT_ram_0020fe2c + 1;
  uVar4 = 1 << (DAT_ram_0020fe23 & 0x1f);
  if (param_2 == 0) {
    DAT_ram_0020fe30 = DAT_ram_0020fe30 & ~uVar4;
    DAT_ram_800379b0 = DAT_ram_0020fe30;
    if ((DAT_ram_0020fe0d != '\0') || (DAT_ram_0020fe2c < 4)) goto LAB_ram_001643e0;
    uVar4 = DAT_ram_0020fe30 & 0xf;
    if (uVar4 == 10) goto LAB_ram_00164360;
LAB_ram_00164370:
    DAT_ram_0020fe30 = DAT_ram_800379b0;
    if (uVar4 != 5) goto joined_r0x00164398;
    if (DAT_ram_0020fe21 != '\x03') goto LAB_ram_001643e0;
LAB_ram_0016437c:
    DAT_ram_0020fe21 = '\x01';
    DAT_ram_0020fe2c = 0;
    DAT_ram_0020fe30 = DAT_ram_800379b0;
    if (DAT_ram_0020fe0c < 2) goto LAB_ram_001643e0;
    pcVar2 = s_AutoCS__Decrease_step_size_to_1d_ram_001c8588;
  }
  else {
    DAT_ram_0020fe30 = uVar4 | DAT_ram_0020fe30;
    DAT_ram_800379b0 = DAT_ram_0020fe30;
    if ((DAT_ram_0020fe0d != '\0') || (DAT_ram_0020fe2c < 4)) goto LAB_ram_001643e0;
    uVar4 = DAT_ram_0020fe30 & 0xf;
    if (uVar4 != 10) goto LAB_ram_00164370;
LAB_ram_00164360:
    DAT_ram_0020fe30 = DAT_ram_800379b0;
    if (DAT_ram_0020fe21 == '\x03') goto LAB_ram_0016437c;
joined_r0x00164398:
    DAT_ram_800379b0 = DAT_ram_0020fe30;
    if (((uVar4 != 0) && (uVar4 != 0xf)) || (DAT_ram_0020fe21 != '\x01')) goto LAB_ram_001643e0;
    DAT_ram_0020fe21 = '\x03';
    DAT_ram_0020fe2c = 0;
    if (DAT_ram_0020fe0c < 2) goto LAB_ram_001643e0;
    pcVar2 = s_AutoCS__Increase_step_size_to_3d_ram_001c85ac;
  }
  DAT_ram_0020fe2c = 0;
  DAT_ram_0020fe30 = DAT_ram_800379b0;
  FUN_ram_000ee260(pcVar2);
LAB_ram_001643e0:
  uVar4 = FUN_ram_00164174(param_2);
  FUN_ram_0018ae60();
  DAT_ram_800379b8 = uVar4;
  uVar3 = FUN_ram_0018ae6c();
  DAT_ram_0020fe24 = 0;
  DAT_ram_0020fe23 = bVar1 + 1 & 3;
  DAT_ram_0020fe20 = (uVar3 < uVar4) + '\x01';
  return;
}


