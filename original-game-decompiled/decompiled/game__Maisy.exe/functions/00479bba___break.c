
/* ==== __break @ 00479bba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bba-00479bba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


