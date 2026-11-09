/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012a9ac */

undefined4 FUN_ram_0012a9ac(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(param_2 + 0x3dc);
  uVar2 = 0;
  if (((uVar1 & 0x80) == 0) || ((uVar1 & 0x40) == 0)) {
    uVar2 = 3;
  }
  else if (((uVar1 & 0x20) == 0) || ((uVar1 & 0x10) == 0)) {
    uVar2 = 2;
  }
  else if (((uVar1 & 8) == 0) || ((uVar1 & 4) == 0)) {
    uVar2 = 1;
  }
  if (2 < *(ushort *)(param_1 + 0x5aa4)) {
    FUN_ram_000ee260(s_qtn_get_sta_nc__u_ram_001c41e0,uVar2);
  }
  return uVar2;
}


