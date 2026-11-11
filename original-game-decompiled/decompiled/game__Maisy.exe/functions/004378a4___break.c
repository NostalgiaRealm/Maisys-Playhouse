
/* ==== __break @ 004378a4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004378a4-004378a4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


