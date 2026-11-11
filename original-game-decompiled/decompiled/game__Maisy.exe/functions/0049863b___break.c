
/* ==== __break @ 0049863b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049863b-0049863b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


