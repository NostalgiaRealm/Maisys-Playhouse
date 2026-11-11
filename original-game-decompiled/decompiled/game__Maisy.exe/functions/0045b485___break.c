
/* ==== __break @ 0045b485 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045b485-0045b485
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


