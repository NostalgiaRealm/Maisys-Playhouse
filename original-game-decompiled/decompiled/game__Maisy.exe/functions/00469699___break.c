
/* ==== __break @ 00469699 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00469699-00469699
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


