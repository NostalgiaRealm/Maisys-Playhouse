
/* ==== __break @ 00479bab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bab-00479bab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


