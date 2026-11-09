/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00159a18 */

void FUN_ram_00159a18(int param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  bVar1 = *(byte *)((int)param_2 + 0x23);
  iVar5 = *(int *)(param_1 + 0x3b54 + (uint)(byte)param_2[0x16] * 4);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)((int)param_2 + 0x21) != '\0') {
    FUN_ram_0014dba8(param_1,iVar5,*param_2);
    return;
  }
  FUN_ram_001598e0(param_1);
  FUN_ram_00159970((char)param_2[0x16],param_2);
  FUN_ram_00159750(iVar5,param_2);
  cVar4 = (char)param_2[10];
  *(uint *)(param_1 + 0x3a0c) = (uint)*(ushort *)((int)param_2 + 0x1e) + *(int *)(param_1 + 0x3a0c);
  if (cVar4 == '\x02') {
    FUN_ram_0014bfc4(iVar5,param_2);
    cVar4 = (char)param_2[10];
  }
  FUN_ram_001377e4(param_1,iVar5,*param_2 >> 0x18 & 0x7f,(short)param_2[0xb],
                   *(undefined1 *)((int)param_2 + 0x4b),(bVar1 & 1) == 1,(char)param_2[8],
                   *param_2 >> 1 & 1,cVar4 != '\x02');
  *(uint *)(iVar5 + 0x448) = (uint)*(byte *)((int)param_2 + 0x1d) + *(int *)(iVar5 + 0x448);
  if ((*param_2 & 1) == 0) {
    if ((*(char *)(param_1 + 0x1e) != '\x06') || (*(byte *)((int)param_2 + 0x2e) < 2))
    goto LAB_ram_00159c20;
    cVar4 = (char)param_2[10];
  }
  else {
    DAT_ram_0018c250 = DAT_ram_0018c250 + 1;
    if (*(short *)(param_1 + 0x4058) == 0) {
      (*DAT_ram_0018c08c)(param_2[2],(char)param_2[3],(char)param_2[0x16],
                          *(undefined1 *)((int)param_2 + 0x4b),(param_2[0xb] & 0x8000) != 0);
    }
    uVar2 = DAT_ram_80038ee4;
    *(undefined4 *)(iVar5 + 2000) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar5 + 0x7d4) = uVar2;
    *(int *)(iVar5 + 0x7d8) = *(int *)(iVar5 + 0x7d8) + 1;
    if ((*(char *)(param_1 + 0x1e) != '\x06') || (*(byte *)((int)param_2 + 0x2e) < 2))
    goto LAB_ram_00159c20;
    cVar4 = (char)param_2[10];
  }
  if (cVar4 == '\x02') {
    FUN_ram_0012da00(param_1,iVar5,param_2);
  }
LAB_ram_00159c20:
  uVar2 = FUN_ram_0013d3ec(iVar5,param_2 + 0xb,param_2);
  if ((char)param_2[10] == '\x02') {
    FUN_ram_001593d0((char)param_2[0x16],*(undefined1 *)((int)param_2 + 0x59),1,uVar2,param_2[9]);
  }
  else {
    uVar2 = FUN_ram_001597fc(iVar5,param_2 + 0xb,param_2,param_2[0x14],param_2[0x15]);
    FUN_ram_00159798((char)param_2[0x16],*(undefined1 *)((int)param_2 + 0x59),1,uVar2,param_2[9]);
  }
  if ((*(short *)(iVar5 + 0x40c) != 0) && (iVar3 = FUN_ram_0012c900(iVar5), iVar3 == 0)) {
    FUN_ram_0012c830(iVar5,0);
    return;
  }
  return;
}


