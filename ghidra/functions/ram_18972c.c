/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018972c */

void FUN_ram_0018972c(int param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_a4 [18];
  undefined4 auStack_5c [18];
  
  thunk_FUN_ram_0039fe00(auStack_a4,&DAT_ram_001abc4c,0x48);
  puVar1 = auStack_5c;
  thunk_FUN_ram_0039fe00(puVar1,&DAT_ram_001abc94,0x48);
  if (param_1 != 0x50) {
    puVar1 = auStack_a4;
  }
  uRame60921ac = *puVar1;
  uRame60921b0 = puVar1[1];
  uRame60921b4 = puVar1[2];
  uRame60921b8 = puVar1[3];
  uRame60921bc = puVar1[4];
  uRame60921c0 = puVar1[5];
  uRame60921c4 = puVar1[6];
  uRame60921c8 = puVar1[7];
  uRame60921cc = puVar1[8];
  uRame60921d0 = puVar1[9];
  uRame609222c = puVar1[10];
  uRame6092230 = puVar1[0xb];
  uRame6092234 = puVar1[0xc];
  uRame6092238 = puVar1[0xd];
  uRame609223c = puVar1[0xe];
  uRame6092240 = puVar1[0xf];
  uRame6092244 = puVar1[0x10];
  uRame6092248 = puVar1[0x11];
  return;
}


