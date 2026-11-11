
/* ==== __break @ 0043ba7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba7d-0043ba7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


