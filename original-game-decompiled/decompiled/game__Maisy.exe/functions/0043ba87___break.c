
/* ==== __break @ 0043ba87 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba87-0043ba87
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


