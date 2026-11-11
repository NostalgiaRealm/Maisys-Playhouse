
/* ==== __break @ 0049be98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049be98-0049be98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


