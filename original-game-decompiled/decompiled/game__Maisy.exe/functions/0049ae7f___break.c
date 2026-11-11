
/* ==== __break @ 0049ae7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae7f-0049ae7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


