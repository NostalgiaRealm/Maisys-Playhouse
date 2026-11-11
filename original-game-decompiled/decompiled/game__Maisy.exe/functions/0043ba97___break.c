
/* ==== __break @ 0043ba97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba97-0043ba97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


