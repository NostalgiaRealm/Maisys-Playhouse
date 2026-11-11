
/* ==== __break @ 00479bcd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bcd-00479bcd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


