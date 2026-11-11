
/* ==== __break @ 0049ae5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae5d-0049ae5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


