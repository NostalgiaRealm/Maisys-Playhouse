
/* ==== __break @ 004378a8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004378a8-004378a8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


