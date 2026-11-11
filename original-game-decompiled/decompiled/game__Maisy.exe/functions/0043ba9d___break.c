
/* ==== __break @ 0043ba9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ba9d-0043ba9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


