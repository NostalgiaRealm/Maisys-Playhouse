
/* ==== __break @ 00479bde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bde-00479bde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


