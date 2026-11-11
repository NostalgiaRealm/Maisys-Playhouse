
/* ==== __break @ 004100ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004100ae-004100ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


