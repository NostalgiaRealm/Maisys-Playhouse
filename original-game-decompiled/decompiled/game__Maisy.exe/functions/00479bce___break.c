
/* ==== __break @ 00479bce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bce-00479bce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


