
/* ==== __break @ 00469726 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00469726-00469726
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


