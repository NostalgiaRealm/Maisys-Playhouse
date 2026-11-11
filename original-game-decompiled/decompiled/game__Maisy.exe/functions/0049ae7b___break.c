
/* ==== __break @ 0049ae7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae7b-0049ae7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


