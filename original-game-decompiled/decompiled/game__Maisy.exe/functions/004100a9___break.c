
/* ==== __break @ 004100a9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004100a9-004100a9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


