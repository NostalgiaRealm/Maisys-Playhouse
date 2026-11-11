
/* ==== __break @ 0043ba9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba9c-0043ba9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


