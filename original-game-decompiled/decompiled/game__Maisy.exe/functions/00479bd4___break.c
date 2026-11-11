
/* ==== __break @ 00479bd4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bd4-00479bd4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


