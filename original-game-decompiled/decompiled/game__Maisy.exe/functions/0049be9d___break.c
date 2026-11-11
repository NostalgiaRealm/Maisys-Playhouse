
/* ==== __break @ 0049be9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049be9d-0049be9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


