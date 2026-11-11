
/* ==== __break @ 00479bda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bda-00479bda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


