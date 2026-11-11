
/* ==== __break @ 0049465d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049465d-0049465d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


