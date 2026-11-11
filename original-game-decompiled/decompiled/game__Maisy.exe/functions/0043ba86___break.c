
/* ==== __break @ 0043ba86 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba86-0043ba86
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


