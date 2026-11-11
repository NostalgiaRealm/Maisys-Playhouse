
/* ==== __break @ 0049f43d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f43d-0049f43d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


