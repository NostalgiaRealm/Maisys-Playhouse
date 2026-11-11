
/* ==== __break @ 00419039 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00419039-00419039
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


