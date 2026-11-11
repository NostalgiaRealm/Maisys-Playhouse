
/* ==== __break @ 0049ae7a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae7a-0049ae7a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


