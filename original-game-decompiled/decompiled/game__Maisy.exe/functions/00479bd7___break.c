
/* ==== __break @ 00479bd7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bd7-00479bd7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


