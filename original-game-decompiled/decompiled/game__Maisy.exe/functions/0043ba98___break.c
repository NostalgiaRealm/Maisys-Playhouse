
/* ==== __break @ 0043ba98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba98-0043ba98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


