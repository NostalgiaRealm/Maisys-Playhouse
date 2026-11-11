
/* ==== __break @ 0042c34b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c34b-0042c34b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


