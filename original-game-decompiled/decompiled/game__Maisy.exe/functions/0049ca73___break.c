
/* ==== __break @ 0049ca73 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ca73-0049ca73
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


