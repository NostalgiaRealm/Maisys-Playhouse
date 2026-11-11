
/* ==== __break @ 004100a5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004100a5-004100a5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


